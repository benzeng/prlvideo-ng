
undefined4 FUN_1004c9a70(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  QArrayData *pQVar8;
  QArrayData *pQVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *local_50;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  if (*(ushort *)(param_2 + 0x14) < 4) {
    return 0xf0000003;
  }
  if (*(short *)(param_2 + 0x16) != 1) {
    return 0xf0000003;
  }
  lVar6 = FUN_1002a6120(param_2,0,1);
  if (lVar6 == 0) {
    return 0xf0000003;
  }
  if (*(uint *)(lVar6 + 8) < 0x3a) {
    return 0xf0000009;
  }
  puVar7 = (undefined4 *)FUN_1002a6010(param_2);
  uVar2 = *puVar7;
  FUN_1004cf2b0(&local_40,*param_1 + 0x48,uVar2);
  if (local_40 == (long *)0x0) {
    return 0xf0000012;
  }
  uVar11 = (ulong)*(uint *)(lVar6 + 8);
  if ((0x45 < uVar11) || (uVar10 = 0xf0000009, *(char *)((long)local_40 + 0xd) == '\0')) {
    cVar4 = (**(code **)(*local_40 + 0x18))();
    uVar10 = 0xf0000013;
    if (cVar4 == '\0') {
      local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
      QByteArray::resize((int)&local_48);
      if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_48,*(uint *)(local_48 + 4) + 1,*(uint *)(local_48 + 8) >> 0x1f);
      }
      pQVar8 = (QArrayData *)0x0;
      pQVar9 = local_48 + *(long *)(local_48 + 0x10);
      if (*(char *)((long)local_40 + 0xd) != '\0') {
        pQVar9 = local_48 + *(long *)(local_48 + 0x10) + 0xc;
        uVar11 = uVar11 - 0xc;
        pQVar8 = local_48 + *(long *)(local_48 + 0x10);
      }
      iVar5 = (**(code **)(*local_40 + 0x20))(local_40,pQVar9,uVar11);
      cVar4 = (**(code **)(*local_40 + 0x18))();
      if (pQVar8 != (QArrayData *)0x0) {
        *(undefined4 *)(pQVar8 + 8) = 0;
        *(undefined8 *)pQVar8 = 0;
        *(undefined4 *)pQVar8 = 0xc;
        *(undefined4 *)(pQVar8 + 4) = 1;
        if (cVar4 != '\0') {
          *(undefined4 *)(pQVar8 + 8) = 1;
        }
      }
      uVar3 = *(uint *)(local_48 + 4);
      if ((1 < *(uint *)local_48) || (*(long *)(local_48 + 0x10) != 0x18)) {
        QByteArray::reallocData(&local_48,uVar3 + 1,*(uint *)(local_48 + 8) >> 0x1f);
      }
      iVar5 = uVar3 + (iVar5 - (int)uVar11);
      FUN_1002a5a50(lVar6,0,local_48 + *(long *)(local_48 + 0x10),iVar5);
      *(int *)(lVar6 + 0x10) = iVar5;
      if (((cVar4 != '\0') && (*(char *)((long)local_40 + 0xc) != '\0')) &&
         (FUN_1004cf360(&local_50,*param_1 + 0x48,uVar2), local_50 != (long *)0x0)) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*local_50 + 0x10))();
        }
      }
      uVar10 = 0;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004c9cbb;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
  }
LAB_1004c9cbb:
  LOCK();
  plVar1 = local_40 + 1;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar6 == 1) {
    (**(code **)(*local_40 + 0x10))();
  }
  return uVar10;
}

