
undefined1 FUN_1002ae740(long param_1,ulong param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  long local_90;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  QString local_40;
  undefined1 local_31;
  
  lVar12 = (param_2 & 0xffffffff) * 0x8f0;
  lVar9 = param_1 + 0x930 + lVar12;
  plVar1 = (long *)(param_1 + 0x9b8 + lVar12);
  if ((*(long *)(param_1 + 0x9b8 + lVar12) == 0) || (FUN_1002add10(param_1,lVar9), *plVar1 == 0)) {
    iVar5 = *(int *)(param_1 + 0x994 + lVar12);
    if (iVar5 == 0) {
      return 1;
    }
    piVar7 = (int *)(param_1 + 0x994 + lVar12);
    if (*(int *)(param_1 + 0x998 + lVar12) != 0) {
      FUN_1002adbf0(param_1,lVar9);
      *(undefined1 *)(param_1 + 0x9e4 + lVar12) = 1;
      lVar6 = FUN_1002afad0(param_1,0);
      *plVar1 = lVar6;
      if (lVar6 == 0) {
        piVar11 = (int *)(param_1 + 0x998 + lVar12);
        goto LAB_1002aea01;
      }
      local_40.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           (CONCAT44(local_40.field0_0x0._4_4_,(uint)*(byte *)(param_1 + 0x9f8 + lVar12)) ^ 1);
      _CGLSetParameter(lVar6,0xde,&local_40);
      iVar5 = *piVar7;
      if (iVar5 == 0) {
        return 1;
      }
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x994 + lVar12);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x998 + lVar12) == 0) {
        FUN_1002adbf0(param_1,lVar9);
        *(undefined1 *)(param_1 + 0x9e4 + lVar12) = 1;
        FUN_1002ade20();
        *plVar1 = 0;
        return 1;
      }
      return 1;
    }
    piVar7 = (int *)(param_1 + 0x994 + lVar12);
  }
  pcVar2 = DAT_1011cccf8;
  iVar10 = *(int *)(param_1 + 0x998 + lVar12);
  if (iVar10 == 0) {
    return 1;
  }
  piVar11 = (int *)(param_1 + 0x998 + lVar12);
  if (iVar5 == -1) {
    lVar6 = *plVar1;
    if (DAT_1011c4a88 != lVar6) {
      DAT_1011c4a88 = lVar6;
      _CGLSetCurrentContext(lVar6);
      iVar10 = *piVar11;
    }
    lVar6 = _IOSurfaceLookup(iVar10);
    *(long *)(param_1 + 0x9c0 + lVar12) = lVar6;
    if (lVar6 != 0) {
      local_90 = _IOSurfaceGetWidth(lVar6);
      iVar5 = _IOSurfaceGetHeight(*(undefined8 *)(param_1 + 0x9c0 + lVar12));
      goto LAB_1002ae9a4;
    }
  }
  else {
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0x3ff0000000000000;
    uVar4 = (*DAT_1011ccc38)();
    (*pcVar2)(uVar4,*piVar7,*piVar11,&local_68);
    pcVar2 = DAT_1011ccce8;
    if (DAT_1011ccce8 != (code *)0x0) {
      uVar4 = (*DAT_1011ccc38)();
      (*pcVar2)(uVar4,*piVar7,*piVar11,&local_70,&local_58);
    }
    local_90 = (long)local_58;
    iVar5 = (int)(long)dStack_50;
    cVar3 = FUN_1002afc80(param_1,*plVar1,*piVar7,*piVar11,local_90,(long)dStack_50 & 0xffffffff);
    if (cVar3 != '\0') {
LAB_1002ae9a4:
      *(int *)(param_1 + 0x9ac + lVar12) = (int)local_90;
      *(int *)(param_1 + 0x9b0 + lVar12) = iVar5;
      uVar4 = 0x2601;
      if (((int)local_90 == *(int *)(param_1 + 0x99c + lVar12)) &&
         (uVar4 = 0x2600, iVar5 != *(int *)(param_1 + 0x9a0 + lVar12))) {
        uVar4 = 0x2601;
      }
      *(undefined4 *)(param_1 + 0x9e0 + lVar12) = uVar4;
      return 1;
    }
  }
LAB_1002aea01:
  *piVar7 = 0;
  *piVar11 = 0;
  if (*plVar1 != 0) {
    FUN_1002adbf0(param_1,lVar9);
    *(undefined1 *)(param_1 + 0x9e4 + lVar12) = 1;
    FUN_1002ade20();
    *plVar1 = 0;
  }
  piVar7 = (int *)(param_1 + 0x998);
  uVar8 = 0;
  while( true ) {
    if (piVar7[-1] != 0) {
      return 0;
    }
    if (*piVar7 != 0) {
      return 0;
    }
    lVar9 = (ulong)(uVar8 + 1) * 0x8f0;
    if (*(int *)(param_1 + 0x994 + lVar9) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x998 + lVar9) != 0) break;
    uVar8 = uVar8 + 2;
    piVar7 = piVar7 + 0x478;
    if (0xf < uVar8) {
      if (*(undefined **)(param_1 + 0x8b8) != PTR_shared_null_100ba20d0) {
        local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
        QString::operator=((QString *)(param_1 + 0x8b8),&local_40);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_40.field0_0x0 != 0) {
              return 0;
            }
            local_31 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
      }
      return 0;
    }
  }
  return 0;
}

