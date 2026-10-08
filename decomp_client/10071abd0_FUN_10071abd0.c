
char * FUN_10071abd0(char *param_1,QString *param_2)

{
  QString *pQVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  char cVar3;
  int iVar4;
  QTypedArrayData<unsigned_short> *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar1 = param_2 + 1;
  cVar3 = operator==(param_2,pQVar1);
  if (cVar3 != '\0') {
    pQVar2 = param_2->field0_0x0;
    iVar4 = QString::compare_helper
                      (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                       PTR_s_Windows_102274b40,0xffffffff,1);
    if (iVar4 == 0) {
      iVar4 = 0x1dc3ec9;
    }
    else {
      pQVar2 = param_2->field0_0x0;
      iVar4 = QString::compare_helper
                        (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                         PTR_s_Linux_102274b48,0xffffffff,1);
      if (iVar4 == 0) {
        iVar4 = 0x1dc3ed1;
      }
      else {
        pQVar2 = param_2->field0_0x0;
        iVar4 = QString::compare_helper
                          (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                           PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
        if (iVar4 == 0) {
          iVar4 = 0x1dcb3bd;
        }
        else {
          pQVar2 = param_2->field0_0x0;
          iVar4 = QString::compare_helper
                            (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                             PTR_s_Generic_102274b58,0xffffffff,1);
          if (iVar4 != 0) {
            pQVar2 = param_2->field0_0x0;
            *(QTypedArrayData<unsigned_short> **)param_1 = pQVar2;
            if (*(int *)pQVar2 + 1U < 2) {
              return param_1;
            }
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + 1;
            UNLOCK();
            return param_1;
          }
          iVar4 = 0x1e13523;
        }
      }
    }
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,iVar4);
    return param_1;
  }
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e13610);
  QString::arg(&local_38,&local_40,param_2,0,0x20);
  pQVar2 = pQVar1->field0_0x0;
  iVar4 = QString::compare_helper
                    (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                     PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
  if (iVar4 == 0) {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1dcb3bd);
  }
  else {
    local_48 = pQVar1->field0_0x0;
    if (1 < *(int *)local_48 + 1U) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  QString::arg(param_1,&local_38,&local_48,0,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10071add0;
    }
    QArrayData::deallocate((QArrayData *)local_48,2,8);
  }
LAB_10071add0:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10071ae00;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10071ae00:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

