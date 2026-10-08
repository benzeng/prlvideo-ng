
int FUN_100a4aef0(long param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint local_3c;
  undefined8 local_38;
  
  uVar8 = FUN_100319390(*(undefined8 *)(param_1 + 0x10));
  FUN_10018c2b0(uVar8);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar6 = CVmCommonOptions::getOsType();
  if (iVar6 == 7) {
    return -0x7ffffff8;
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x20);
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  uVar13 = iVar6 + 1;
  local_3c = uVar13;
  QMutex::lock();
  puVar2 = (undefined8 *)(param_1 + 0x30);
  puVar9 = *(uint **)(param_1 + 0x30);
  if (1 < *puVar9) {
    FUN_100a4cdd0(puVar2);
    puVar9 = (uint *)*puVar2;
  }
  lVar4 = *(long *)(puVar9 + 4);
  lVar10 = 0;
  if (*(long *)(puVar9 + 4) != 0) {
    do {
      while (lVar11 = lVar4, uVar12 = *(uint *)(lVar11 + 0x18), uVar12 < uVar13) {
        lVar4 = *(long *)(lVar11 + 0x10);
        if (*(long *)(lVar11 + 0x10) == 0) {
          if (lVar10 == 0) goto LAB_100a4afde;
          uVar12 = *(uint *)(lVar10 + 0x18);
          lVar11 = lVar10;
          goto LAB_100a4afd9;
        }
      }
      lVar4 = *(long *)(lVar11 + 8);
      lVar10 = lVar11;
    } while (*(long *)(lVar11 + 8) != 0);
LAB_100a4afd9:
    if (uVar12 <= uVar13) goto LAB_100a4aff9;
  }
LAB_100a4afde:
  local_38 = 0;
  lVar11 = FUN_100a4ccd0(puVar2,&local_3c,&local_38);
LAB_100a4aff9:
  lVar4 = *param_2;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(long **)(lVar11 + 0x20);
  *(long *)(lVar11 + 0x20) = lVar4;
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  QMutex::unlock();
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","VmCliPathResolverClient",3,"resolvePaths requestId = %d",uVar13);
  }
  iVar7 = FUN_100a4a6c0(param_1,uVar13,param_3,param_4);
  iVar6 = 0;
  if (iVar7 != 0) {
    QMutex::lock();
    FUN_100a4c8f0(puVar2,&local_3c);
    QMutex::unlock();
    iVar6 = iVar7;
  }
  return iVar6;
}

