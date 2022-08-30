import Control.Monad (unless)

readInts :: IO [Int]
readInts = fmap (map read.words) getLine

band :: Int -> String
band value
   | value == 0 = "PROXYCITY"
   | value == 1 = "P.Y.N.G."
   | value == 2 = "DNSUEY!"
   | value == 3 = "SERVERS"
   | value == 4 = "HOST!"
   | value == 5 = "CRIPTONIZE"
   | value == 6 = "OFFLINE DAY"
   | value == 7 = "SALT"
   | value == 8 = "ANSWER!"
   | value == 9 = "RAR?"
   | otherwise = "WIFI ANTENNAS"

forN :: Int -> IO()
forN n = do
    unless (n == 0) $ do
        nm <- readInts
        putStrLn (band (head nm + nm !! 1))
        forN (n - 1)

main :: IO()
main = do
    nStr <- getLine
    forN (read nStr :: Int)
