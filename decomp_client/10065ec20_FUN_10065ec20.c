
void FUN_10065ec20(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)param_1[0x12];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ec64;
      pQVar1 = (QArrayData *)param_1[0x12];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ec64:
  pQVar1 = (QArrayData *)param_1[0x11];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ec9a;
      pQVar1 = (QArrayData *)param_1[0x11];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ec9a:
  pQVar1 = (QArrayData *)param_1[0x10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ecd0;
      pQVar1 = (QArrayData *)param_1[0x10];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ecd0:
  pQVar1 = (QArrayData *)param_1[0xf];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ed00;
      pQVar1 = (QArrayData *)param_1[0xf];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ed00:
  pQVar1 = (QArrayData *)param_1[0xe];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ed30;
      pQVar1 = (QArrayData *)param_1[0xe];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ed30:
  pQVar1 = (QArrayData *)param_1[0xd];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ed60;
      pQVar1 = (QArrayData *)param_1[0xd];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ed60:
  pQVar1 = (QArrayData *)param_1[0xc];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ed90;
      pQVar1 = (QArrayData *)param_1[0xc];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ed90:
  pQVar1 = (QArrayData *)param_1[0xb];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065edc0;
      pQVar1 = (QArrayData *)param_1[0xb];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065edc0:
  pQVar1 = (QArrayData *)param_1[10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065edf0;
      pQVar1 = (QArrayData *)param_1[10];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065edf0:
  pQVar1 = (QArrayData *)param_1[9];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ee20;
      pQVar1 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ee20:
  pQVar1 = (QArrayData *)param_1[8];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ee50;
      pQVar1 = (QArrayData *)param_1[8];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ee50:
  pQVar1 = (QArrayData *)param_1[7];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ee80;
      pQVar1 = (QArrayData *)param_1[7];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ee80:
  pQVar1 = (QArrayData *)param_1[6];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065eeb0;
      pQVar1 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065eeb0:
  pQVar1 = (QArrayData *)param_1[5];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065eee0;
      pQVar1 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065eee0:
  pQVar1 = (QArrayData *)param_1[4];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ef10;
      pQVar1 = (QArrayData *)param_1[4];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ef10:
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ef40;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ef40:
  pQVar1 = (QArrayData *)param_1[2];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065ef70;
      pQVar1 = (QArrayData *)param_1[2];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065ef70:
  pQVar1 = (QArrayData *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10065efa0;
      pQVar1 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10065efa0:
  pQVar1 = (QArrayData *)*param_1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

