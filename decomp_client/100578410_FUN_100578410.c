
void FUN_100578410(long param_1,int param_2)

{
  QString *pQVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 3) {
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x78);
    QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_The_network_connection_has_been_l_102270920);
    QLabel::setText(pQVar1);
    if (*(int *)local_30 == -1) {
      return;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  else {
    if (param_2 != 1) {
      return;
    }
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 0x78);
    QMetaObject::tr((char *)&local_28,"",0x1dd1ed6);
    QLabel::setText(pQVar1);
    if (*(int *)local_28 == -1) {
      return;
    }
    local_30 = local_28;
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  QArrayData::deallocate(local_30,2,8);
  return;
}

