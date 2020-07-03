{-# LANGUAGE GADTs #-}

module AST where

import Data.Word

data Dim = Dim [Exp Word]

data Vector a where
  Vector :: Dim -> Vector a 

data PrimOp a where
  Add :: Num a => PrimOp ((a,a) -> a) 

data Exp a where
  Lit  :: a -> Exp a
  Prim :: PrimOp (a -> r) -> Exp a -> Exp r
  Tup  :: Exp a -> Exp b -> Exp (a, b) 

data Rate = Rate Word


data Stream a where
  Iota :: Rate -> Stream Word
  SlowDown :: Word -> Stream a -> Stream (Vector a)  -- rate of output stream is input rate divided by vector size 
  
