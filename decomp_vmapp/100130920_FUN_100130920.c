
undefined1 FUN_100130920(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("vm_resize_disk_image",0x14);
  local_30 = pQVar3;
  cVar1 = FUN_10011d720(param_1,&local_30,1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("vm_resize_disk_size",0x13);
    local_38 = pQVar4;
    cVar1 = FUN_10011d720(param_1,&local_38,0);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_10011ed70(param_1);
    }
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_21 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100130a00;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_100130a00:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_21 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_21) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
  return uVar2;
}

