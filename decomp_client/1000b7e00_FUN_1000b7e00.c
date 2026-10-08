
void FUN_1000b7e00(QObject *param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_1021f8d30;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_31 = *piVar1 != 0;
    UNLOCK();
  }
  auVar5._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar5._0_8_ = PTR_shared_null_1021e1288;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar5;
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar5;
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar5;
  param_1[0x48] = (QObject)0x0;
  auVar6._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar6._0_8_ = PTR_shared_null_1021e15e8;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar6;
  *(undefined1 (*) [16])(param_1 + 0x68) = auVar6;
  *(undefined **)(param_1 + 0x78) = PTR_shared_null_1021e12f0;
  QMutex::QMutex((QMutex *)(param_1 + 0x88),0);
  puVar2 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x90) = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 0x98) = 0;
  auVar7._8_4_ = (int)puVar2;
  auVar7._0_8_ = puVar2;
  auVar7._12_4_ = (int)((ulong)puVar2 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xa0) = auVar7;
  FUN_1000eeda0(param_1 + 0xb8);
  FUN_1000bd540("DocsList_t",0,0);
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_1 + 0x10);
  if (lVar4 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAA","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000b7fdf;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1000b7fdf:
                    /* WARNING: Subroutine does not return */
    __exit(0xffffffff);
  }
  FUN_10018d830(&local_48,lVar4);
  QString::operator=((QString *)(param_1 + 0x18),&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) goto LAB_1000b7f55;
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1000b7f55:
  *(long *)(param_1 + 0xb0) = param_3;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_3 + 0x30);
  return;
}

