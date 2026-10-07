
void FUN_1002b2340(long *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  QMutex::lock();
  if (param_2 == '\0') {
    lVar2 = param_1[0xe];
  }
  else {
    lVar2 = param_1[0xd];
  }
  *(long *)(lVar2 + 0xf0) = *(long *)(lVar2 + 0xf0) + 1;
  local_60 = param_7;
  uStack_5c = param_8;
  local_58 = param_9;
  uStack_54 = CONCAT31(uStack_54._1_3_,param_2) ^ 1;
  local_70 = param_3;
  uStack_6c = param_4;
  local_68 = param_5;
  uStack_64 = param_6;
  if ((char)param_1[2] == '\0') {
    (**(code **)(*param_1 + 0x50))(param_1,&local_70);
  }
  else {
    puVar3 = operator_new(0x40,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar3 == (undefined8 *)0x0) {
      pcVar4 = "rel";
      if (param_2 != '\0') {
        pcVar4 = "abs";
      }
      FUN_1008e3970("","LocalDevices",0,
                    "[%s] Couldn\'t store pending_move (%d, %d, %d, %d, 0x%x, %s)",param_1[0x18],
                    param_3,param_4,param_5,param_6,param_9,pcVar4);
      *(long *)(param_1[0x11] + 0xf0) = *(long *)(param_1[0x11] + 0xf0) + 1;
    }
    else {
      puVar3[7] = local_38;
      puVar3[6] = local_40;
      puVar3[5] = local_48;
      puVar3[4] = local_50;
      puVar3[3] = CONCAT44(uStack_54,local_58);
      puVar3[2] = CONCAT44(uStack_5c,local_60);
      puVar3[1] = CONCAT44(uStack_64,local_68);
      *puVar3 = CONCAT44(uStack_6c,local_70);
      puVar1 = (undefined8 *)param_1[4];
      param_1[4] = (long)(puVar3 + 4);
      puVar3[4] = param_1 + 3;
      puVar3[5] = puVar1;
      *puVar1 = puVar3 + 4;
    }
  }
  QMutex::unlock();
  return;
}

