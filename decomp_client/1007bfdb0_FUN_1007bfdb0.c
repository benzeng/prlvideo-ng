
void FUN_1007bfdb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001547d0(uVar1,param_1 + 0x30);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance");
    return;
  }
  lVar2 = FUN_10015a340(lVar2);
  uVar1 = *(undefined8 *)(lVar2 + 0x170);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e18501);
  FUN_1007c1750(param_1,uVar1,&local_40,param_2,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007bfe60;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007bfe60:
  uVar1 = *(undefined8 *)(lVar2 + 0x178);
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1e1850f);
  FUN_1007c1750(param_1,uVar1,&local_48,param_3,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return;
}

