
undefined8 FUN_1004a4c00(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  QArrayData *pQVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  puVar3 = PTR_shared_null_100ba20d0;
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar9 = 0xf0000003;
  local_38 = lVar10;
  if (*(ushort *)(param_2 + 0x16) < 2) goto LAB_1004a4f12;
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  lVar6 = FUN_1002a6120(param_2,0,0);
  if (lVar6 == 0) {
    uVar9 = 0xf0000003;
  }
  else {
    QByteArray::resize((int)&local_58);
    if ((1 < *(uint *)local_58) || (*(long *)(local_58 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_58,*(uint *)(local_58 + 4) + 1,*(uint *)(local_58 + 8) >> 0x1f)
      ;
    }
    FUN_1002a5990(lVar6,0,local_58 + *(long *)(local_58 + 0x10),*(undefined4 *)(lVar6 + 8));
    uVar9 = 0xf0000003;
    if (*(uint *)(local_58 + 4) != 0) {
      local_60 = (QArrayData *)puVar3;
      cVar5 = FUN_1004a5f70(*(undefined8 *)(param_1 + 0x18),&local_58,0x34,&local_60);
      uVar9 = 0xf0000003;
      if (cVar5 != '\0') {
        if ((1 < *(uint *)local_60) || (*(long *)(local_60 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_60,*(uint *)(local_60 + 4) + 1,*(uint *)(local_60 + 8) >> 0x1f);
        }
        pQVar4 = local_60;
        lVar10 = *(long *)(local_60 + 0x10);
        uVar1 = *(uint *)(local_60 + 4);
        *(undefined4 *)(local_60 + lVar10) = 0x20000;
        *(undefined4 *)(local_60 + lVar10 + 4) = 9;
        *(undefined4 *)(local_60 + lVar10 + 8) = 0;
        *(uint *)(local_60 + lVar10 + 0xc) = uVar1;
        *(undefined4 *)(local_60 + lVar10 + 0x30) = 0;
        *(undefined8 *)(local_60 + lVar10 + 0x28) = 0;
        *(undefined8 *)(local_60 + lVar10 + 0x20) = 0;
        *(undefined8 *)(local_60 + lVar10 + 0x18) = 0;
        *(undefined8 *)(local_60 + lVar10 + 0x10) = 0;
        FUN_1007d6bd0(local_48);
        FUN_1007ea6d0(local_48,pQVar4 + lVar10 + 0x10);
        QMutex::lock();
        plVar7 = operator_new(0x18);
        *(undefined4 *)(plVar7 + 1) = 1;
        plVar7[2] = param_2;
        *plVar7 = (long)&PTR_FUN_100bc24a8;
        FUN_1007d6a70(&local_68,local_48);
        plVar8 = (long *)FUN_1004a7dd0(param_1 + 0x90,&local_68);
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plVar2 = (long *)*plVar8;
        *plVar8 = (long)plVar7;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar8 = plVar2 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        if (*(int *)local_68 != -1) {
          if (*(int *)local_68 != 0) {
            LOCK();
            *(int *)local_68 = *(int *)local_68 + -1;
            local_49 = *(int *)local_68 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_1004a4e39;
          }
          QArrayData::deallocate(local_68,2,8);
        }
LAB_1004a4e39:
        QMutex::unlock();
        FUN_100434830(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0xf0),0x1896d,pQVar4 + lVar10,
                      uVar1,&DAT_1011ccb98,0);
        uVar9 = 0xffffffff;
        LOCK();
        plVar2 = plVar7 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_49 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1004a4ee2;
        }
        QArrayData::deallocate(local_60,1,8);
      }
    }
  }
LAB_1004a4ee2:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1004a4f12;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_1004a4f12:
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

