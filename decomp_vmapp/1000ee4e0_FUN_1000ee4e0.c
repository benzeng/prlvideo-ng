
bool FUN_1000ee4e0(undefined4 *param_1,uint param_2,uint param_3,char param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  bVar1 = (ulong)param_3 + 0x40 <= uVar3;
  if (bVar1) {
    *param_1 = 0;
    param_1[1] = 0x8a9ffffe;
    param_1[3] = 0;
    param_1[2] = 0;
    lVar2 = (ulong)(param_4 == '\0') + 1;
    param_1[lVar2 * 4 + 3] = param_3 + 0x30;
    param_1[lVar2 * 4] = 0;
    param_1[lVar2 * 4 + 2] = 0x30;
    param_1[lVar2 * 4 + 1] = 0x8a9ffffa;
  }
  else {
    FUN_1008e3970("","vm",0,"Invalid buffer length 0x%x, 0x%x, line=%u",(ulong)param_3,uVar3,0x7d2);
  }
  return bVar1;
}

