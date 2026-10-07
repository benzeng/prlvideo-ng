
void FUN_1007fe960(long param_1,int param_2,ulong param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  
  FUN_10081d010(9,0xc,"s3_both.c",0x2b7);
  plVar3 = (long *)(param_1 + 0x230);
  if (param_2 == 0) {
    plVar3 = (long *)(param_1 + 0x228);
  }
  puVar1 = (ulong *)*plVar3;
  if (((puVar1 != (ulong *)0x0) && (((*puVar1 == param_3 || (*puVar1 == 0)) && (7 < param_3)))) &&
     (uVar2 = puVar1[1], (uint)uVar2 < *(uint *)(param_1 + 0x220))) {
    *puVar1 = param_3;
    *param_4 = puVar1[2];
    puVar1[2] = (ulong)param_4;
    *(uint *)(puVar1 + 1) = (uint)uVar2 + 1;
    FUN_10081d010(10,0xc,"s3_both.c",0x2c4);
    return;
  }
  FUN_10081d010(10,0xc,"s3_both.c",0x2c4);
  if (param_4 != (ulong *)0x0) {
    FUN_10081e1a0(param_4);
    return;
  }
  return;
}

