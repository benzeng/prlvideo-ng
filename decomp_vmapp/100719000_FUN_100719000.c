
long FUN_100719000(long param_1,int *param_2,char *param_3,uint param_4)

{
  uint uVar1;
  size_t sVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  sVar2 = _strlen(param_3);
  uVar7 = (ulong)*(uint *)(param_1 + 0x61);
  if ((ulong)(*(int *)(param_1 + 0x65) - *(uint *)(param_1 + 0x61)) < sVar2 + 10) {
    uVar6 = 0xfffffffe;
LAB_10071903d:
    lVar8 = 0;
    FUN_10071e690(uVar6,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x69 + uVar7) = 1;
    *(char *)(param_1 + 0x71 + uVar7) = (char)sVar2;
    _memcpy((void *)(param_1 + 0x72 + uVar7),param_3,sVar2);
    if (param_2 == (int *)0x0) {
      uVar1 = *(uint *)(param_1 + 1 + (ulong)param_4 * 4);
      if (uVar1 == 1) {
        *(uint *)(param_1 + 1 + (ulong)param_4 * 4) = *(uint *)(param_1 + 0x61);
        iVar4 = *(int *)(param_1 + 0x61);
      }
      else {
        piVar3 = (int *)0x0;
        do {
          uVar5 = (ulong)uVar1;
          if ((ulong)*(uint *)(param_1 + 0x61) <= uVar5 + 10) break;
          piVar3 = (int *)(param_1 + 0x69 + uVar5);
          uVar1 = *(uint *)(param_1 + 0x69 + uVar5);
        } while (uVar1 != 1);
        if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
          uVar6 = 0xfffffff4;
          goto LAB_10071903d;
        }
        iVar4 = *(int *)(param_1 + 0x61);
        *piVar3 = iVar4;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x61);
      *param_2 = iVar4;
    }
    lVar8 = param_1 + 0x69 + uVar7;
    *(int *)(param_1 + 0x61) = (int)(sVar2 + 10) + iVar4;
  }
  return lVar8;
}

