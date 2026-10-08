
undefined8 * FUN_100a0f230(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  QVariant local_68;
  QArrayData *local_58;
  long local_50;
  long *local_48;
  long *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e12f0;
  FUN_100a10c40(&local_50);
  local_48 = (long *)(local_50 + 0x10 + (long)*(int *)(local_50 + 8) * 8);
  local_40 = (long *)(local_50 + 0x10 + (long)*(int *)(local_50 + 0xc) * 8);
  if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
    do {
      local_38 = 1;
      plVar1 = (long *)*local_48;
      lVar2 = *plVar1;
      pcVar4 = (char *)(*(long *)(lVar2 + 0x10) + lVar2);
      lVar3 = 0;
      if (pcVar4 != (char *)0x0) {
        lVar3 = 0;
        if (*(uint *)(lVar2 + 4) != 0) {
          lVar3 = 0;
          do {
            if (pcVar4[lVar3] == '\0') break;
            lVar3 = lVar3 + 1;
          } while ((uint)lVar3 < *(uint *)(lVar2 + 4));
        }
      }
      local_58 = (QArrayData *)QString::fromAscii_helper(pcVar4,(int)lVar3);
      QVariant::QVariant(&local_68,(QByteArray *)(plVar1 + 1));
      FUN_10008d1b0(param_1,&local_58,&local_68);
      QVariant::~QVariant(&local_68);
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_29 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100a0f32b;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100a0f32b:
      local_48 = local_48 + 1;
    } while (local_48 != local_40);
  }
  local_38 = 1;
  FUN_100a10b00(&local_50);
  return param_1;
}

