
void FUN_100499a40(undefined2 *param_1,void *param_2,int param_3,int param_4,int param_5,
                  char param_6)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  *param_1 = 0x4d42;
  uVar3 = param_5 * param_3 + 0x1f;
  uVar6 = uVar3 >> 5;
  iVar1 = param_4 * uVar6;
  *(int *)(param_1 + 1) = iVar1 * 4 + 0x36;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x36;
  *(undefined4 *)(param_1 + 7) = 0x28;
  *(int *)(param_1 + 9) = param_3;
  *(int *)(param_1 + 0xb) = param_4;
  param_1[0xd] = 1;
  param_1[0xe] = (short)param_5;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  if (param_6 == '\0') {
    _memcpy(param_1 + 0x1b,param_2,(long)(iVar1 * 4));
  }
  else if (0 < param_4) {
    uVar4 = (ulong)(uVar3 >> 3 & 0x1ffffffc);
    lVar5 = (long)param_4 + 1;
    pvVar2 = (void *)(((long)param_4 + -1) * uVar4 + 0x36 + (long)param_1);
    do {
      _memcpy(pvVar2,param_2,(ulong)(uVar6 << 2));
      param_2 = (void *)((long)param_2 + uVar4);
      lVar5 = lVar5 + -1;
      pvVar2 = (void *)((long)pvVar2 - uVar4);
    } while (1 < lVar5);
  }
  return;
}

