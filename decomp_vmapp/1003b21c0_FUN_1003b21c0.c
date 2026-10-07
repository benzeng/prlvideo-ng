
undefined8 FUN_1003b21c0(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  int iStack_30;
  uint uStack_2c;
  
  local_38 = 0;
  iStack_30 = 0;
  uStack_2c = 0;
  local_48 = 0;
  uStack_40 = 0;
  lVar3 = **(long **)(*(long *)(param_1 + 0x20) + 0xf0);
  if (lVar3 != 0) {
    do {
      lVar2 = **(long **)(lVar3 + 8);
      uVar1 = *(ushort *)(lVar3 + 0x4c);
      if (uVar1 < 0x1e) {
        if (uVar1 == 1) {
          uStack_40 = CONCAT44(uStack_40._4_4_,(int)uStack_40 + 1);
        }
      }
      else if (uVar1 < 0x2b) {
        switch(uVar1) {
        case 0x1e:
          local_38._4_4_ = local_38._4_4_ + 1;
          if ((1 < local_48._4_4_) && (local_38._4_4_ != 0)) {
            FUN_1003b2d00(param_1,lVar3,&local_48);
          }
          break;
        case 0x20:
          uStack_40._4_4_ = uStack_40._4_4_ + 1;
          if (((int)uStack_40 != 0) && (uStack_40._4_4_ != 0)) {
            FUN_1003b27c0(param_1,lVar3,&local_48);
          }
          break;
        case 0x22:
          local_48 = CONCAT44(local_48._4_4_ + 1,(uint)local_48);
          break;
        case 0x27:
          local_38._0_4_ = (int)local_38 + 1;
          if (((int)uStack_40 != 0) && ((int)local_38 != 0)) {
            FUN_1003b2a40(param_1,lVar3,&local_48);
          }
        }
      }
      else if (uVar1 == 0x2b) {
        iStack_30 = iStack_30 + 1;
        if ((((((uint)local_48 < 2) || (local_38._4_4_ == 0)) || (iStack_30 == 0)) ||
            (lVar3 = FUN_1003b3350(param_1,lVar3,&local_48), lVar3 != 0)) &&
           (((1 < uStack_2c && ((int)uStack_40 != 0)) && (iStack_30 != 0)))) {
          FUN_1003b3a30(param_1,lVar3,&local_48);
        }
      }
      else if (uVar1 == 0x37) {
        uStack_2c = uStack_2c + 1;
      }
      else if (uVar1 == 0x31) {
        local_48 = CONCAT44(local_48._4_4_,(uint)local_48 + 1);
      }
      lVar3 = lVar2;
    } while (lVar2 != 0);
  }
  return 0;
}

