
bool FUN_10040c8a0(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulong in_RAX;
  char *pcVar6;
  bool bVar7;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    bVar7 = false;
    FUN_1008e3970("","PrlAudioCore",0,"Can\'t start, because the unit is uninitialized.");
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (*(char *)(param_1 + 0x44) == '\0') {
        *(undefined1 *)(param_1 + 0x45) = 1;
      }
      local_38 = in_RAX;
      cVar3 = FUN_10040ca80(param_1);
      if (cVar3 == '\0') {
        if (*(char *)(param_1 + 0x44) == '\0') {
          pcVar6 = "output";
        }
        else {
          pcVar6 = "input";
        }
        FUN_1008e3970("","PrlAudioCore",0,"Can\'t attach pipeline for %s device!",pcVar6);
      }
      else {
        iVar4 = _AudioOutputUnitStart(*(undefined8 *)(param_1 + 0x30));
        if (iVar4 == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          uVar1 = *(undefined1 *)(param_1 + 0x44);
          local_38 = local_38 & 0xffffffffffffff;
          iVar4 = -1;
          do {
            local_38 = CONCAT44(local_38._4_4_,1);
            iVar5 = _AudioUnitGetProperty(uVar2,0x7d1,0,uVar1,(long)&local_38 + 7,&local_38);
            if (iVar5 != 0) break;
            iVar4 = iVar4 + 1;
            if (200 < iVar4) {
              FUN_1008e3970("","PrlAudioCore",0,"Timeout while waiting for audio %s","Run");
              iVar5 = -0x2a7c;
              break;
            }
            _usleep(10000);
            iVar5 = 0;
          } while (local_38._7_1_ == '\0');
          if ((iVar5 != 0) && (0 < DAT_1011b55f8)) {
            FUN_1008e3970("","PrlAudioCore",1,"Can\'t wait for audio start. Err code: %d",0);
          }
          *(undefined1 *)(param_1 + 0x38) = 1;
          return true;
        }
        FUN_1008e3970("","PrlAudioCore",0,"Can\'t start audio unit. Err code: %d",iVar4);
      }
    }
    else {
      FUN_1008e3970("","PrlAudioCore",0,"The unit is already started!");
    }
    bVar7 = *(char *)(param_1 + 0x38) != '\0';
  }
  return bVar7;
}

