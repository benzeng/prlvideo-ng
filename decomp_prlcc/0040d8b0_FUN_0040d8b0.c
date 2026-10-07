
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d8b0(int param_1,int param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    DAT_0061d9d8 = 0;
    DAT_0061d9c8 = &DAT_0061d9c8;
    _DAT_0061d9d0 = &DAT_0061d9c8;
                    /* try { // try from 0040d911 to 0040d915 has its CatchHandler @ 0040da7f */
    puVar2 = operator_new__(0x10);
    DAT_0061d9c0 = puVar2;
    *puVar2 = 0x6e69622f7273752f;
    puVar2[1] = 0x646e646c72702f;
    DAT_0061d9f8 = 0;
    _DAT_0061d9e8 = &DAT_0061d9e8;
    _DAT_0061d9f0 = &DAT_0061d9e8;
                    /* try { // try from 0040d95e to 0040d962 has its CatchHandler @ 0040daf3 */
    puVar2 = operator_new__(0xf);
    _DAT_0061d9e0 = puVar2;
    *(undefined4 *)(puVar2 + 1) = 0x6c72702f;
    *puVar2 = 0x6e69622f7273752f;
    *(undefined2 *)((long)puVar2 + 0xc) = 0x7063;
    *(undefined1 *)((long)puVar2 + 0xe) = 0;
    _DAT_0061da18 = 0;
    _DAT_0061da08 = &DAT_0061da08;
    _DAT_0061da10 = &DAT_0061da08;
                    /* try { // try from 0040d9b1 to 0040d9b5 has its CatchHandler @ 0040dae2 */
    puVar2 = operator_new__(0x10);
    DAT_0061da00 = puVar2;
    *puVar2 = 0x6e69622f7273752f;
    puVar2[1] = 0x6167736c72702f;
    _DAT_0061da38 = 0;
    _DAT_0061da28 = &DAT_0061da28;
    _DAT_0061da30 = &DAT_0061da28;
                    /* try { // try from 0040d9fe to 0040da02 has its CatchHandler @ 0040dad1 */
    puVar2 = operator_new__(0x13);
    puVar1 = PTR_DAT_0061bd48;
    DAT_0061da20 = puVar2;
    puVar2[1] = 0x727068736c72702f;
    *puVar2 = 0x6e69622f7273752f;
    *(undefined2 *)(puVar2 + 2) = 0x666f;
    *(undefined1 *)((long)puVar2 + 0x12) = 0;
    __cxa_atexit(FUN_0040d830,0,puVar1);
    DAT_0061d9a0 = &DAT_0061d9a0;
    _DAT_0061d9a8 = &DAT_0061d9a0;
    __cxa_atexit(FUN_0040d310,0,puVar1);
    return;
  }
  return;
}

