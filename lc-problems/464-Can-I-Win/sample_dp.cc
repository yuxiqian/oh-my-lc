class Solution {
    int dp[ ( 1 << 21 ) + 1 ];
    int ct = 0;

public:
    Solution() {
        memset( dp, -1, sizeof dp );
    }
    bool canIWin( int maxChoosableInteger, int desiredTotal, long int bitMask = 0 ) {
        if ( ct == 0 ) {
            int sum = maxChoosableInteger * ( maxChoosableInteger + 1 );
            sum     = sum / 2;
            if ( desiredTotal > sum )
                return false;
        }
        if ( bitMask == 0 && desiredTotal == 0 )
            return true;
        if ( desiredTotal <= 0 )
            return false;
        if ( dp[ bitMask ] != -1 )
            return dp[ bitMask ];
        ct++;
        for ( int i = 1; i <= maxChoosableInteger; i++ ) {
            if ( ( bitMask & ( 1 << i ) ) == 0 ) {
                if ( !canIWin( maxChoosableInteger, desiredTotal - i, bitMask | ( 1 << i ) ) )
                    return true;
            }
        }
        return dp[ bitMask ] = false;
    }
};