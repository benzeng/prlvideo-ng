
undefined8 * FUN_1009e1320(undefined8 *param_1,char param_2,uint param_3)

{
  QArrayData *pQVar1;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (param_2 == '\0') {
    if ((param_3 & 0xfffffffd) == 9) {
      pQVar1 = (QArrayData *)
               QString::fromAscii_helper("https://report.parallels.com/pdfm/12/cep",0x28);
      local_38 = pQVar1;
      FUN_1000341d0(param_1,&local_38);
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_21 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_21) {
            return param_1;
          }
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
    }
    else {
      pQVar1 = (QArrayData *)
               QString::fromAscii_helper("https://report.parallels.com/pdfm/12/report",0x2b);
      local_40 = pQVar1;
      FUN_1000341d0(param_1,&local_40);
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_21 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_21) {
            return param_1;
          }
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
    }
  }
  else {
    pQVar1 = (QArrayData *)
             QString::fromAscii_helper("https://report.parallels.com/pdfm/12/legacy",0x2b);
    local_30 = pQVar1;
    FUN_1000341d0(param_1,&local_30);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_21 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_21) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  return param_1;
}

