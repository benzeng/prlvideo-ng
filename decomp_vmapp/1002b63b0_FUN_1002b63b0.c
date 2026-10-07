
void FUN_1002b63b0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  undefined *local_38;
  
  *param_1 = &PTR_FUN_100bb3270;
  param_1[1] = &PTR_metaObject_100bb32f8;
  param_1[0xd] = &PTR_FUN_100bb3370;
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"destroy");
  }
  iVar3 = FUN_1002b6770();
  if ((iVar3 == 0) && (-1 < DAT_1011c568c)) {
    FUN_1008e3970("","USB",0,"Can\'t disconnect signals.");
  }
  QMutex::lock();
  puVar4 = &DAT_1011c4ab8;
  uVar6 = 0;
  do {
    if (*(int *)(puVar4 + -3) == 5) {
      iVar3 = FUN_1002c6cd0(puVar4);
      if (iVar3 == 0) {
        *(undefined4 *)(puVar4 + -3) = 6;
        puVar4[-2] = 0;
      }
      else {
        *(undefined4 *)(puVar4 + -3) = 0;
      }
    }
    uVar6 = uVar6 + 1;
    puVar4 = puVar4 + 6;
  } while (uVar6 < 0x3d);
  local_38 = PTR_shared_null_100ba2188;
  FUN_10051afa0(param_1 + 0x54,&local_38);
  FUN_100013180(&local_38);
  plVar5 = (long *)param_1[0x5d];
  if (plVar5 != (long *)0x0) {
    if (DAT_1011c568c < 3) {
LAB_1002b6514:
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    else {
      FUN_1008e3970("","USB",0,"destroy UHC %p",plVar5);
      plVar5 = (long *)param_1[0x5d];
      if (plVar5 != (long *)0x0) goto LAB_1002b6514;
    }
    param_1[0x5d] = 0;
  }
  plVar5 = (long *)param_1[0x5e];
  if (plVar5 != (long *)0x0) {
    if (DAT_1011c568c < 3) {
LAB_1002b656b:
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    else {
      FUN_1008e3970("","USB",0,"destroy EHC %p",plVar5);
      plVar5 = (long *)param_1[0x5e];
      if (plVar5 != (long *)0x0) goto LAB_1002b656b;
    }
    param_1[0x5e] = 0;
  }
  plVar5 = (long *)param_1[0x5f];
  if (plVar5 == (long *)0x0) goto LAB_1002b65e0;
  if (DAT_1011c568c < 3) {
LAB_1002b65c2:
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  else {
    FUN_1008e3970("","USB",0,"destroy XHC %p",plVar5);
    plVar5 = (long *)param_1[0x5f];
    if (plVar5 != (long *)0x0) goto LAB_1002b65c2;
  }
  param_1[0x5f] = 0;
LAB_1002b65e0:
  while (plVar5 = DAT_1011c5620, (long **)DAT_1011c5620 != &DAT_1011c5620) {
    lVar1 = *DAT_1011c5620;
    plVar2 = (long *)DAT_1011c5620[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar5 = 0x112233;
    plVar5[1] = (long)&DAT_00445566;
    FUN_1002c9070();
  }
  while (plVar5 = DAT_1011c5630, (long **)DAT_1011c5630 != &DAT_1011c5630) {
    lVar1 = *DAT_1011c5630;
    plVar2 = (long *)DAT_1011c5630[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar5 = 0x112233;
    plVar5[1] = (long)&DAT_00445566;
    FUN_1002c9070();
  }
  DAT_100bfa1d4 = 0;
  DAT_100bfa1ed = DAT_100bfa1ed | 1;
  QMutex::unlock();
  QObject::~QObject((QObject *)(param_1 + 0x60));
  FUN_100013180(param_1 + 0x54);
  QMutex::~QMutex((QMutex *)(param_1 + 0x53));
  FUN_100013180(param_1 + 0x12);
  FUN_10025b110(param_1 + 0xd);
  FUN_100257ad0(param_1);
  return;
}

