
undefined8 FUN_100110950(QString *param_1)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  char **ppcVar5;
  undefined1 uVar6;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  undefined1 local_69;
  char *local_68 [6];
  long local_38;
  
  puVar3 = PTR_shared_null_100ba20d0;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_68[4] = (char *)0x0;
  local_68[0] = "com.parallels.kext.hypervisor";
  ppcVar5 = local_68;
  local_68[1] = "com.parallels.kext.netbridge";
  local_68[2] = "com.parallels.kext.usbconnect";
  local_68[3] = "com.parallels.kext.vnic";
  uVar6 = 1;
  do {
    ppcVar5 = ppcVar5 + 1;
    FUN_100110730(&local_78);
    if ((local_78.field0_0x0 != (QTypedArrayData<unsigned_short> *)puVar3) &&
       (cVar4 = operator==(&local_78,param_1), cVar4 == '\0')) {
      pcVar1 = ppcVar5[-1];
      QString::toLatin1();
      lVar2 = *(long *)(local_80 + 0x10);
      QString::toLatin1();
      FUN_1008e3970("","vm",0,"Kernel extension %s is \"%s\" (required \"%s\")",pcVar1,
                    local_80 + lVar2,local_88 + *(long *)(local_88 + 0x10));
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_69 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_100110a88;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_100110a88:
      if (*(int *)local_80 == -1) {
        uVar6 = 0;
      }
      else {
        if (*(int *)local_80 == 0) {
LAB_100110abc:
          QArrayData::deallocate(local_80,1,8);
        }
        else {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_69 = *(int *)local_80 != 0;
          UNLOCK();
          if (!(bool)local_69) goto LAB_100110abc;
        }
        uVar6 = 0;
      }
    }
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_69 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_100110b00;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100110b00:
    if (*ppcVar5 == (char *)0x0) {
      if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100ba2320 >> 8),uVar6);
    }
  } while( true );
}

