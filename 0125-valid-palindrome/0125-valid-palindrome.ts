function isPalindrome(s: string): boolean {
    const splits = s.split(" ");
    let i: number;

    let merges = splits.join('');


    merges = merges.replace(/[^a-zA-Z0-9]/g, '').toLowerCase();

    const reversedMerges = merges.split('').reverse().join('');

    if(merges === reversedMerges) 
        return true;

    return false;
};