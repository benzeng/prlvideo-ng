
byte FUN_10079a4a0(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  QArrayData *local_30;
  undefined1 local_22;
  
  plVar3 = (long *)FUN_1007d0410(param_1 + 8);
  plVar4 = operator_new(0x20);
  *(undefined4 *)(plVar4 + 1) = 1;
  plVar4[2] = (long)plVar3;
  *plVar4 = (long)&PTR_FUN_1011a5c10;
  plVar4[3] = (long)FUN_1008a17f0;
  if (plVar3 == (long *)0x0) {
    bVar5 = 0;
  }
  else {
    iVar2 = FUN_1008b9070(*(undefined8 *)(*(long *)(*plVar3 + 0x20) + 8));
    if (iVar2 == 0) {
      local_30 = (QArrayData *)
                 QString::fromAscii_helper("Certificate has wrong estimate date format",0x2a);
      FUN_100799fe0(param_1,&local_30);
      if (*(int *)local_30 == -1) {
        bVar5 = 0;
      }
      else {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_22 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_22) {
            bVar5 = 0;
            goto LAB_10079a569;
          }
        }
        QArrayData::deallocate(local_30,2,8);
        bVar5 = 0;
      }
    }
    else {
      bVar5 = (byte)((uint)iVar2 >> 0x1f);
    }
  }
LAB_10079a569:
  LOCK();
  plVar3 = plVar4 + 1;
  lVar1 = *plVar3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)lVar1 == 1) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return bVar5;
}

