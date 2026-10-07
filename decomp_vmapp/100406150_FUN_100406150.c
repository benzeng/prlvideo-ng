
undefined8 FUN_100406150(long *param_1,QString *param_2,undefined1 param_3,char param_4)

{
  QString *this;
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  QArrayData *local_858;
  QArrayData *local_850;
  QString local_848;
  undefined1 local_839;
  char local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  cVar2 = (**(code **)(*(long *)param_1[1] + 0x98))();
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x18))(param_1,1);
  }
  this = (QString *)(param_1 + 2);
  QString::operator=(this,param_2);
  pQVar1 = param_2->field0_0x0;
  iVar3 = QString::compare_helper
                    (pQVar1 + *(long *)(pQVar1 + 0x10),*(undefined4 *)(pQVar1 + 4),
                     "1.44 USB Floppy drive",0xffffffff,1);
  *(bool *)((long)param_1 + 0x24) = iVar3 == 0;
  if (iVar3 != 0) {
    uVar4 = FUN_1004065e0(param_1,this,param_3);
    goto LAB_1004063e3;
  }
  cVar2 = FUN_100405dd0(local_438,local_838);
  if (cVar2 == '\0') {
    uVar4 = 0;
    goto LAB_1004063e3;
  }
  if (local_438[0] == '\0') {
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 3) = 2;
    uVar4 = 1;
    goto LAB_1004063e3;
  }
  _strlen(local_438);
  QString::fromUtf8_helper((char *)&local_848,(int)local_438);
  QString::operator=(this,&local_848);
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (*(int *)local_848.field0_0x0 != -1) {
    if (*(int *)local_848.field0_0x0 != 0) {
      LOCK();
      *(int *)local_848.field0_0x0 = *(int *)local_848.field0_0x0 + -1;
      local_839 = *(int *)local_848.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_839) goto LAB_100406293;
    }
    QArrayData::deallocate((QArrayData *)local_848.field0_0x0,2,8);
  }
LAB_100406293:
  if (param_4 != '\0') {
    sVar5 = _strlen(local_838);
    local_850 = (QArrayData *)QString::fromAscii_helper(local_838,(int)sVar5);
    iVar3 = FUN_100785e20(&local_850);
    if (*(int *)local_850 != -1) {
      if (*(int *)local_850 != 0) {
        LOCK();
        *(int *)local_850 = *(int *)local_850 + -1;
        local_839 = *(int *)local_850 != 0;
        UNLOCK();
        if ((bool)local_839) goto LAB_100406307;
      }
      QArrayData::deallocate(local_850,2,8);
    }
LAB_100406307:
    if (iVar3 == -1) {
      uVar6 = 1;
      do {
        sVar5 = _strlen(local_838);
        local_858 = (QArrayData *)QString::fromAscii_helper(local_838,(int)sVar5);
        iVar3 = FUN_100785e20(&local_858);
        if (*(int *)local_858 != -1) {
          if (*(int *)local_858 != 0) {
            LOCK();
            *(int *)local_858 = *(int *)local_858 + -1;
            local_839 = *(int *)local_858 != 0;
            UNLOCK();
            if ((bool)local_839) goto LAB_100406384;
          }
          QArrayData::deallocate(local_858,2,8);
        }
LAB_100406384:
        _usleep(10000);
      } while ((iVar3 == -1) && (bVar8 = uVar6 < 100, uVar6 = uVar6 + 1, bVar8));
      lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (iVar3 == -1) {
        uVar4 = 0;
        goto LAB_1004063e3;
      }
    }
  }
  uVar4 = FUN_1004064f0(param_1,this,param_3);
LAB_1004063e3:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

