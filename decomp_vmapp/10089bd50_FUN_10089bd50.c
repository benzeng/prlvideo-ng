
long FUN_10089bd50(long *param_1,ulong *param_2,long param_3,code *param_4,long param_5,int param_6,
                  int param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong local_78;
  undefined4 local_70;
  uint local_68;
  int local_64;
  int local_60 [2];
  long local_58;
  ulong local_50;
  
  if (((param_1 == (long *)0x0) || (lVar2 = *param_1, lVar2 == 0)) &&
     (lVar2 = FUN_100884e10(), lVar2 == 0)) {
    FUN_100887ce0(0xd,0x94,0x41,"a_set.c",0xaf);
  }
  else {
    local_78 = *param_2;
    local_50 = 0;
    if (param_3 != 0) {
      local_50 = local_78 + param_3;
    }
    local_68 = FUN_1008af630(&local_78,&local_58,&local_64,local_60,local_50 - local_78);
    if ((local_68 & 0x80) == 0) {
      if (local_60[0] == param_7) {
        if (local_64 == param_6) {
          if (local_78 + local_58 <= local_50) {
            if (local_68 == 0x21) {
              local_58 = (param_3 + *param_2) - local_78;
            }
            local_50 = local_78 + local_58;
            if (0 < local_58) {
              do {
                if ((local_68 & 1) == 0) {
                  if (local_58 < 1) break;
                }
                else {
                  iVar1 = FUN_1008af5f0(&local_78,local_58);
                  if (iVar1 != 0) break;
                  local_70 = 0;
                }
                lVar3 = (*param_4)(0,&local_78,local_58);
                if (lVar3 == 0) {
                  FUN_100887ce0(0xd,0x94,0x71,"a_set.c",0xd9);
                  FUN_1008afef0(*param_2,(int)local_78 - (int)*param_2);
                  goto LAB_10089be7c;
                }
                iVar1 = FUN_1008852e0(lVar2,lVar3);
                if (iVar1 == 0) goto LAB_10089be7c;
              } while (local_78 < local_50);
            }
            if (param_1 != (long *)0x0) {
              *param_1 = lVar2;
            }
            *param_2 = local_78;
            return lVar2;
          }
          FUN_100887ce0(0xd,0x94,0x88,"a_set.c",0xc4);
        }
        else {
          FUN_100887ce0(0xd,0x94,0x68,"a_set.c",0xc0);
        }
      }
      else {
        FUN_100887ce0(0xd,0x94,0x65,"a_set.c",0xbc);
      }
    }
  }
LAB_10089be7c:
  if ((lVar2 != 0) && ((param_1 == (long *)0x0 || (*param_1 != lVar2)))) {
    if (param_5 == 0) {
      FUN_100884dd0();
    }
    else {
      FUN_100885590();
    }
  }
  return 0;
}

