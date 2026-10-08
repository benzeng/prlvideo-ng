
ulong FUN_100557c00(long *param_1,QKeySequence *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  QKeySequence local_48 [8];
  QKeySequence local_40 [8];
  undefined4 local_38;
  
  lVar5 = *param_1;
  iVar2 = *(int *)(lVar5 + 8);
  uVar6 = 0;
  if (iVar2 < *(int *)(lVar5 + 0xc)) {
    lVar8 = lVar5 + 8 + (long)iVar2 * 8;
    lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      if (lVar5 == 0) {
        uVar6 = 0;
        goto LAB_100557d9b;
      }
      puVar1 = (undefined8 *)(lVar8 + 8);
      lVar8 = lVar8 + 8;
      cVar4 = FUN_100714bd0(*puVar1,param_2);
      lVar5 = lVar5 + -8;
    } while (cVar4 == '\0');
    uVar9 = lVar8 - (*param_1 + 0x10 + (long)*(int *)(*param_1 + 8) * 8);
    uVar6 = 0;
    if ((uVar9 & 0x7fffffff8) != 0x7fffffff8) {
      QKeySequence::QKeySequence(local_48,param_2);
      QKeySequence::QKeySequence(local_40,param_2 + 8);
      local_38 = *(undefined4 *)(param_2 + 0x10);
      puVar7 = (uint *)*param_1;
      if (1 < *puVar7) {
        FUN_100559bb0(param_1,puVar7[1]);
        puVar7 = (uint *)*param_1;
      }
      puVar11 = puVar7 + ((long)(int)(uVar9 >> 3) + (long)(int)puVar7[2]) * 2 + 4;
      uVar3 = puVar7[3];
      FUN_100559f00(param_1,puVar11);
      puVar10 = puVar11;
      while (puVar11 = puVar11 + 2, (long)puVar11 + ((long)(int)uVar3 * -8 - (long)puVar7) != 0x10)
      {
        cVar4 = FUN_100714bd0(*(undefined8 *)puVar11,local_48);
        if (cVar4 == '\0') {
          *(undefined8 *)puVar10 = *(undefined8 *)puVar11;
          puVar10 = puVar10 + 2;
        }
        else {
          FUN_100559f00(param_1,puVar11);
        }
      }
      uVar6 = (ulong)((long)puVar7 + (((long)(int)uVar3 * 8 + 0x10) - (long)puVar10)) >> 3;
      *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) - (int)uVar6;
      QKeySequence::~QKeySequence(local_40);
      QKeySequence::~QKeySequence(local_48);
    }
  }
LAB_100557d9b:
  return uVar6 & 0xffffffff;
}

