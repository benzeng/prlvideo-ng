
undefined8 * FUN_100714ea0(undefined8 *param_1,undefined8 param_2,QString *param_3)

{
  QString *pQVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  char cVar3;
  long local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  FUN_1002101d0(&local_48);
  local_40 = (undefined8 *)(local_48 + 0x10 + (long)*(int *)(local_48 + 8) * 8);
  local_38 = (undefined8 *)(local_48 + 0x10 + (long)*(int *)(local_48 + 0xc) * 8);
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      pQVar1 = (QString *)*local_40;
      cVar3 = operator==(pQVar1,param_3);
      if (cVar3 != '\0') {
        pQVar2 = pQVar1[1].field0_0x0;
        *param_1 = pQVar2;
        if (1 < *(int *)pQVar2 + 1U) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + 1;
          local_21 = *(int *)pQVar2 != 0;
          UNLOCK();
        }
        FUN_1001e3400(&local_48);
        return param_1;
      }
      local_40 = local_40 + 1;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  FUN_1001e3400(&local_48);
  *param_1 = PTR_shared_null_1021e1288;
  return param_1;
}

