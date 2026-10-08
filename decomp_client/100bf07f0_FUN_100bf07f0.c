
int FUN_100bf07f0(long param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  uVar7 = *puVar1;
  FUN_100c58810(param_1,0xf);
  iVar3 = FUN_100be4490(uVar7,param_2,param_3);
  uVar4 = FUN_100be64d0(uVar7,iVar3);
  uVar6 = 0;
  switch(uVar4) {
  case 0:
    if (0 < iVar3) {
      if ((puVar1[2] == 0) ||
         (lVar2 = puVar1[3], puVar1[3] = iVar3 + lVar2, (ulong)(iVar3 + lVar2) <= (ulong)puVar1[2]))
      {
        if (puVar1[4] == 0) break;
        uVar6 = 0;
        uVar5 = _time((time_t *)0x0);
        if (uVar5 <= (ulong)(puVar1[4] + puVar1[5])) break;
        puVar1[5] = uVar5;
        *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
      }
      else {
        puVar1[3] = 0;
        *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
      }
      uVar6 = 0;
      FUN_100be4600(uVar7);
    }
    break;
  case 2:
    uVar7 = 9;
    goto LAB_100bf08a3;
  case 3:
    uVar7 = 10;
LAB_100bf08a3:
    FUN_100c58830(param_1,uVar7);
    break;
  case 4:
    FUN_100c58830(param_1,0xc);
    uVar6 = 1;
    break;
  case 7:
    FUN_100c58830(param_1,0xc);
    uVar6 = 2;
    break;
  case 8:
    FUN_100c58830(param_1,0xc);
    uVar6 = 3;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  return iVar3;
}

