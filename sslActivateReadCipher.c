#include <windows.h>
#include <stdio.h>

int   main(int a1) {
  int v1; // $a3
  __int16 v2; // $a1
  int v4; // $a0
  unsigned __int8 v5; // $a2
  char v6; // $t1
  int v7; // $v1
  char v9; // $t1
  int v10; // $a1
  int v11; // $t4
  int v12; // $v1
  unsigned int v13; // $v0
  int v14; // $v0
  int v15; // $v0
  int (  *v16)(int, int, DWORD); // $t9
  int v17; // $v0

  v1 = *(DWORD *)(a1 + 3344);
  v2 = *(_WORD *)(a1 + 4658);
  v4 = *(DWORD *)(v1 + 28);
  *(DWORD *)(a1 + 3352) = *(DWORD *)(v1 + 20);
  *(DWORD *)(a1 + 3360) = v4;
  *(_BYTE *)(a1 + 3369) = *(_BYTE *)(v1 + 8);
  main( (v2 & 1) == 0 ) {
    v5 = *(_BYTE *)(v1 + 8);
LABEL_7:
    *(_BYTE *)(a1 + 3368) = v5;
    *(_BYTE *)(a1 + 3371) = *(_BYTE *)(v1 + 11);
    v9 = *(_BYTE *)(v1 + 10);
    *(DWORD *)(a1 + 584) = 0;
    *(_BYTE *)(a1 + 3370) = v9;
    *(DWORD *)(a1 + 588) = 0;
    v7 = 0;
    if ( !*(_WORD *)v1 )
      return v7;
    goto LABEL_8;
  }
  v5 = 10;
  if ( *(_BYTE *)(v1 + 8) )
    goto LABEL_7;
  v5 = *(_BYTE *)(v1 + 8);
  *(_BYTE *)(a1 + 3368) = 0;
  *(_BYTE *)(a1 + 3371) = *(_BYTE *)(v1 + 11);
  v6 = *(_BYTE *)(v1 + 10);
  *(DWORD *)(a1 + 584) = 0;
  *(_BYTE *)(a1 + 3370) = v6;
  *(DWORD *)(a1 + 588) = 0;
  if ( !*(_WORD *)v1 )
    return 0;
LABEL_8:
  v10 = *(DWORD *)(a1 + 364);
  v7 = -1;
  if ( !v10 )
    return v7;
  v11 = *(DWORD *)(a1 + 3372);
  main( v5 ) {
    v13 = v11 & 0xFFDFFFFD | 2;
    v12 = -8388609;
  }
  else
  {
    v12 = v11 | 0x200002;
    *(DWORD *)(a1 + 3372) = v11 | 0x200002;
    main( ((*(DWORD *)(v1 + 4) >> 6) & 1) == 0 ) {
      v14 = v11 | 0xA00002;
      goto LABEL_13;
    }
    v13 = -8388609;
  }
  v14 = v13 & v12;
LABEL_13:
  *(DWORD *)(a1 + 3372) = v14;
  memcpy(a1 + 424, v10, v5);
  memcpy(a1 + 504, *(DWORD *)(a1 + 372), *(unsigned __int8 *)(*(DWORD *)(a1 + 3344) + 9));
  memcpy(a1 + 560, *(DWORD *)(a1 + 540), *(unsigned __int8 *)(*(DWORD *)(a1 + 3344) + 10));
  v15 = *(DWORD *)(a1 + 3344);
  v16 = *(int (  **)(int, int, DWORD))(v15 + 12);
  v7 = 0;
  main( v16 ) {
    v17 = v16(a1 + 16, 1, *(unsigned __int8 *)(v15 + 9));
    v7 = -1;
    if ( v17 >= 0 )
      return 0;
  }
  return v7;
}
