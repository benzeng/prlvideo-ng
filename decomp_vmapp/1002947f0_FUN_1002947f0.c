
void FUN_1002947f0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bb15f0;
  param_1[1] = &PTR_metaObject_100bb1750;
  param_1[0xd] = &PTR_FUN_100bb17c8;
  param_1[0x20d] = &PTR_FUN_100bb17f8;
  FUN_100295080();
  pQVar1 = (QArrayData *)param_1[0x2839];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100294870;
      pQVar1 = (QArrayData *)param_1[0x2839];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100294870:
  FUN_1003fd2e0(param_1 + 0x2725);
  FUN_100401dd0(param_1 + 0x26f7);
  FUN_10008d470(param_1 + 0x25e0);
  FUN_10008d470(param_1 + 0x24b9);
  FUN_10008d470(param_1 + 0x2392);
  FUN_10008d470(param_1 + 0x226b);
  FUN_10008d470(param_1 + 0x2144);
  FUN_10008d470(param_1 + 0x201d);
  FUN_10008d470(param_1 + 0x1ef6);
  FUN_10008d470(param_1 + 0x1dcf);
  FUN_10008d470(param_1 + 0x1ca8);
  FUN_10008d470(param_1 + 0x1b81);
  FUN_10008d470(param_1 + 0x1a5a);
  FUN_10008d470(param_1 + 0x1933);
  FUN_10008d470(param_1 + 0x180c);
  FUN_10008d470(param_1 + 0x16e5);
  FUN_10008d470(param_1 + 0x15be);
  FUN_10008d470(param_1 + 0x1497);
  FUN_10008d470(param_1 + 0x1370);
  FUN_10008d470(param_1 + 0x1249);
  FUN_10008d470(param_1 + 0x1122);
  FUN_10008d470(param_1 + 0xffb);
  FUN_10008d470(param_1 + 0xed4);
  FUN_10008d470(param_1 + 0xdad);
  FUN_10008d470(param_1 + 0xc86);
  FUN_10008d470(param_1 + 0xb5f);
  FUN_10008d470(param_1 + 0xa38);
  FUN_10008d470(param_1 + 0x911);
  FUN_10008d470(param_1 + 0x7ea);
  FUN_10008d470(param_1 + 0x6c3);
  FUN_10008d470(param_1 + 0x59c);
  FUN_10008d470(param_1 + 0x475);
  FUN_10008d470(param_1 + 0x34e);
  FUN_10008d470(param_1 + 0x227);
  FUN_100291a10(param_1);
  return;
}

