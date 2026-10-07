
void FUN_100125840(undefined8 param_1,long *param_2)

{
  QArrayData *pQVar1;
  long lVar2;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
    lVar2 = lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8;
    do {
      pQVar1 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_standard_param",0x1e);
      local_40 = pQVar1;
      FUN_10011da30(param_1,lVar2,&local_40);
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_31 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001258c5;
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
LAB_1001258c5:
      lVar2 = lVar2 + 8;
    } while (lVar2 != *param_2 + 0x10 + (long)*(int *)(*param_2 + 0xc) * 8);
  }
  return;
}

