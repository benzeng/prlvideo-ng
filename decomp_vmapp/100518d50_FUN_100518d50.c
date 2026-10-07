
void FUN_100518d50(long param_1,undefined8 param_2,void *param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  QArrayData *local_48;
  long *local_40;
  undefined1 local_31;
  
  pvVar5 = operator_new__(param_4,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_40 = operator_new(0x18);
  *(undefined4 *)(local_40 + 1) = 1;
  local_40[2] = (long)pvVar5;
  *local_40 = (long)&PTR_FUN_100bef320;
  if (pvVar5 != (void *)0x0) {
    _memcpy((void *)local_40[2],param_3,param_4);
    uVar4 = FUN_100519b00(param_1 + 0x28,param_2,&local_40,param_4 & 0xffffffff,0,0,0,0);
    cVar3 = FUN_100519210(uVar4);
    if (cVar3 == '\0' && 0 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("LOCTOOL_H","LocationHost",1,"failed to send %ld bytes to %s",param_4,
                    local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100518e6e;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
  }
LAB_100518e6e:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_40 + 0x10))(local_40);
    }
  }
  return;
}

