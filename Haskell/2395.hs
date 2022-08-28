readInts :: IO [Int]
readInts = fmap (map read.words) getLine

main :: IO ()
main = do
    xyzC <- readInts
    xyzN <- readInts
    print (product (zipWith div xyzN xyzC))
