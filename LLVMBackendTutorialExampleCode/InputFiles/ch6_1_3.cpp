// clang -c ch6_1_3.cpp -emit-llvm -o ch6_1_3.bc
// /Users/Jonathan/llvm/3.1.test/cpu0/1/cmake_debug_build/bin/Debug/llc -march=cpu0 -relocation-model=pic -filetype=asm ch6_1_3.bc -o ch6_1_3.cpu0.s

int main()
{
    int a;
    int b = 5;
    int i = 0;
	
	for (i = 0; i == 3; i++) {
		a = a + i;
	}
	for (i = 0; i != 3; i++) {
		a = a + i;
	}
	for (i = 0; i > 3; i++) {
		a = a + i;
	}
	for (i = 0; i > 3; i++) {
		a = a + i;
	}
	for (i = 0; i == b; i++) {
		a++;
	}
	for (i = 0; i != b; i++) {
		a++;
	}
	for (i = 0; i < b; i++) {
		a++;
	}
	for (i = 7; i > b; i--) {
		a--;
	}
	for (i = 0; i <= b; i++) {
		a++;
	}
label_1:
	for (i = 7; i >= b; i--) {
		a--;
	}
	
	while (i < 7) {
		a++;
		i++;
		if (a >= 4)
			continue;
		else if (a == 3) {
			break;
		}
	}
	if (a == 3)
		goto label_1; 
	
    return a;
}
