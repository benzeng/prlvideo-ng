
undefined4 FUN_1004a5030(long param_1,long param_2)

{
  long *plVar1;
  long ******pppppplVar2;
  long *******ppppppplVar3;
  bool bVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  long lVar8;
  long *******ppppppplVar9;
  ulong uVar10;
  QArrayData *local_60;
  long ******local_58;
  long ******local_50;
  long local_48;
  QArrayData *local_40;
  char local_33;
  char local_32;
  undefined1 local_31;
  
  puVar5 = PTR_shared_null_100ba20d0;
  if (*(short *)(param_2 + 0x16) == 0) {
    return 0xf0000003;
  }
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar8 = FUN_1002a6120(param_2,0,0);
  if (lVar8 == 0) {
    uVar7 = 0xf0000003;
    goto LAB_1004a52e5;
  }
  QByteArray::resize((int)&local_40);
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_1002a5990(lVar8,0,local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(lVar8 + 8));
  uVar7 = 0xf0000003;
  if (*(uint *)(local_40 + 4) == 0) goto LAB_1004a52e5;
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x90);
  if (((plVar1 == (long *)0x0) ||
      ((**(code **)(*plVar1 + 0x38))(plVar1,&local_32,&local_33), local_32 == '\0')) ||
     (local_33 == '\0')) {
    local_48 = 0;
    local_58 = (long ******)&local_58;
    local_50 = (long ******)&local_58;
    ppppppplVar9 = operator_new(0x18);
    *(undefined4 *)(ppppppplVar9 + 2) = 0x15;
    ppppppplVar9[1] = (long ******)&local_58;
    *ppppppplVar9 = (long ******)&local_58;
    local_48 = 1;
    local_58 = (long ******)ppppppplVar9;
    local_50 = (long ******)ppppppplVar9;
    local_58 = operator_new(0x18);
    *(undefined4 *)(local_58 + 2) = 0x16;
    local_58[1] = (long *****)&local_58;
    *local_58 = (long *****)ppppppplVar9;
    ppppppplVar9[1] = local_58;
    local_48 = 2;
    cVar6 = FUN_1004a9860(local_40 + *(long *)(local_40 + 0x10),(long)(int)*(uint *)(local_40 + 4),
                          &local_58);
    bVar4 = false;
    if (cVar6 != '\0') {
      QMutex::lock();
      QByteArray::operator=((QByteArray *)(param_1 + 0xa0),(QByteArray *)&local_40);
      uVar10 = param_1 + 0x98U & 0xfffffffffffffffe;
      QMutex::unlock();
      local_60 = (QArrayData *)puVar5;
      QByteArray::resize((int)&local_60);
      if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
      }
      lVar8 = *(long *)(local_60 + 0x10);
      *(undefined4 *)(local_60 + lVar8) = 0x20000;
      *(undefined4 *)(local_60 + lVar8 + 4) = 0xc;
      *(undefined4 *)(local_60 + lVar8 + 8) = 0;
      *(undefined4 *)(local_60 + lVar8 + 0xc) = 0x10;
      FUN_100434830(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf0),0x1896d,local_60 + lVar8,0x10,
                    &DAT_1011ccb98,0,uVar10);
      bVar4 = true;
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a5282;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
LAB_1004a5282:
    if (local_48 != 0) {
      pppppplVar2 = (long ******)*local_50;
      pppppplVar2[1] = local_58[1];
      *local_58[1] = (long ****)pppppplVar2;
      local_48 = 0;
      ppppppplVar9 = (long *******)local_50;
      while (ppppppplVar9 != &local_58) {
        ppppppplVar3 = (long *******)ppppppplVar9[1];
        operator_delete(ppppppplVar9);
        ppppppplVar9 = ppppppplVar3;
      }
    }
    uVar7 = 0;
    if (bVar4) goto LAB_1004a52e5;
  }
  uVar7 = FUN_1004a5e40(param_1,&local_40);
LAB_1004a52e5:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return uVar7;
}

