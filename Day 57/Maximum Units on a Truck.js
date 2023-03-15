/**
 * @param {number[][]} boxTypes
 * @param {number} truckSize
 * @return {number}
 */
var maximumUnits = function(boxTypes, truckSize) {
    
    boxTypes.sort((a, b) => b[1] - a[1]);

    var answer = 0;

        for(var i = 0 ; i < boxTypes.length ; i++){

            var possible = Math.min(truckSize, boxTypes[i][0]);

            answer += possible*boxTypes[i][1];

            truckSize -= possible;

            if(truckSize == 0) break;
        }

        return answer;
    
};