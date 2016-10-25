#define INSTANCES_USUAL     Eq, Ord, Data, Typeable, Generic
#define INSTANCES_NEWTYPE   INSTANCES_USUAL, Enum, Ix, NFData
#define INSTANCES_MICRO     INSTANCES_NEWTYPE, Bounded, Random, Arbitrary, CoArbitrary
#define LensP Lens'
#define LENS(S,F,L,A) {-# INLINE L #-}; L :: LensP S A; L = lens F $ \ S {..} a -> S {F = a, ..}
