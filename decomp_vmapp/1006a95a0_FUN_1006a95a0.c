
int FUN_1006a95a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  QArrayData *local_48;
  QArrayData *local_40;
  
  uVar5 = 0;
LAB_1006a95d7:
  do {
    QString::toUtf8();
    FUN_1008e3970("","dimg",0,"Opening file %s handle %u",local_40 + *(long *)(local_40 + 0x10),
                  uVar5);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) goto LAB_1006a963f;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1006a963f:
    iVar1 = FUN_1006a9840(param_1,param_2);
    if (iVar1 == -1) {
      QString::toUtf8();
      FUN_1008e3970("","dimg",0,"Error opening file %s",local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 == -1) {
        return -0x7ffdefec;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return -0x7ffdefec;
        }
      }
      QArrayData::deallocate(local_48,1,8);
      return -0x7ffdefec;
    }
    if (uVar5 == 0) {
      iVar2 = _flock(iVar1,6);
      if (iVar2 < 0) {
        piVar3 = ___error();
        pcVar4 = _strerror(*piVar3);
        FUN_1008e3970("","dimg",0,"Open: flock failed (%s)",pcVar4);
        iVar2 = -0x7ffdefc9;
      }
      else {
        iVar2 = (**(code **)(*(long *)*param_3 + 0x20))((long *)*param_3,iVar1);
        if (iVar2 == iVar1) {
          (**(code **)(*(long *)*param_3 + 0x90))((long *)*param_3,2);
          uVar5 = 1;
          goto LAB_1006a95d7;
        }
        FUN_1008e3970("","dimg",0,"Something wrong when setting handle inside file abstraction");
        iVar2 = -0x7ffffffc;
      }
LAB_1006a97aa:
      _close(iVar1);
      return iVar2;
    }
    iVar2 = (**(code **)(*(long *)*param_3 + 0xa8))((long *)*param_3,uVar5,iVar1);
    if (iVar2 < 0) {
      FUN_1008e3970("","dimg",0,"Error 0x%x when setting handle inside file abstraction for aio",
                    iVar2);
      goto LAB_1006a97aa;
    }
    uVar5 = uVar5 + 1;
    if (2 < uVar5) {
      return 0;
    }
  } while( true );
}

