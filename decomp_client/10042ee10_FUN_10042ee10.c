
void FUN_10042ee10(long param_1,long *param_2)

{
  QString *pQVar1;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x60) + 0x60);
  if (*(int *)(*param_2 + 4) < 6) {
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Password_must_have_at_least_6_ch_10226e530);
  }
  else {
    local_28 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  QLabel::setText(pQVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10042eea1;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10042eea1:
  FUN_10042ea00(param_1);
  return;
}

