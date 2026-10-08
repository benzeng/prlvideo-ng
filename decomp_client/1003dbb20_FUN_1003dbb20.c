
undefined1 FUN_1003dbb20(int param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined1 uVar8;
  QVariant local_60;
  undefined *local_50;
  long local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  CVmProfileHelper::StartupAndShutdown::get_profile_values();
  local_50 = PTR_shared_null_1021e15e8;
  lVar7 = *(long *)(local_40 + 0x10);
  lVar2 = 0;
  if (*(long *)(local_40 + 0x10) != 0) {
    do {
      while (lVar3 = lVar7, iVar5 = *(int *)(lVar3 + 0x18), iVar5 < param_1) {
        lVar7 = *(long *)(lVar3 + 0x10);
        if (*(long *)(lVar3 + 0x10) == 0) {
          if (lVar2 == 0) goto LAB_1003dbb9d;
          iVar5 = *(int *)(lVar2 + 0x18);
          lVar3 = lVar2;
          goto LAB_1003dbb99;
        }
      }
      lVar7 = *(long *)(lVar3 + 8);
      lVar2 = lVar3;
    } while (*(long *)(lVar3 + 8) != 0);
LAB_1003dbb99:
    if (iVar5 <= param_1) goto LAB_1003dbb9f;
  }
LAB_1003dbb9d:
  lVar3 = 0;
LAB_1003dbb9f:
  ppuVar6 = &local_50;
  if (lVar3 != 0) {
    ppuVar6 = (undefined **)(lVar3 + 0x20);
  }
  FUN_1003df730(&local_48,ppuVar6);
  FUN_1003dec70(&local_50);
  uVar4 = (ulong)*(uint *)(local_48 + 8);
  uVar8 = 1;
  lVar7 = 0;
  if ((int)*(uint *)(local_48 + 8) < *(int *)(local_48 + 0xc)) {
    do {
      FUN_1003e1800(&local_60,param_2,*(undefined8 *)(local_48 + 0x10 + ((int)uVar4 + lVar7) * 8),0)
      ;
      cVar1 = QVariant::cmp(&local_60);
      QVariant::~QVariant(&local_60);
      if (cVar1 == '\0') {
        uVar8 = 0;
        break;
      }
      lVar7 = lVar7 + 1;
      uVar4 = (ulong)*(int *)(local_48 + 8);
    } while (lVar7 < (long)((long)*(int *)(local_48 + 0xc) - uVar4));
  }
  FUN_1003dec70(&local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar8;
      }
      local_31 = 0;
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      FUN_1003df6f0();
      QMapDataBase::freeTree(local_40,(int)*(undefined8 *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_40);
  }
  return uVar8;
}

