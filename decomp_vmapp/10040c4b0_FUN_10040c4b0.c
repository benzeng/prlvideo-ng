
bool FUN_10040c4b0(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 in_RAX;
  bool bVar5;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    FUN_1008e3970("","PrlAudioCore",0,"Can\'t stop, because the unit is uninitialized.");
LAB_10040c615:
    *(undefined1 *)(param_1 + 0x38) = 0;
    bVar5 = true;
  }
  else {
    if (*(char *)(param_1 + 0x38) == '\0') {
      FUN_1008e3970("","PrlAudioCore",0,"The unit is already stopped!");
    }
    else {
      local_38 = in_RAX;
      iVar3 = _AudioOutputUnitStop();
      if (iVar3 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        uVar1 = *(undefined1 *)(param_1 + 0x44);
        local_38 = CONCAT17(1,(undefined7)local_38);
        iVar3 = -1;
        do {
          local_38 = CONCAT44(local_38._4_4_,1);
          iVar4 = _AudioUnitGetProperty(uVar2,0x7d1,0,uVar1,(long)&local_38 + 7,&local_38);
          if (iVar4 != 0) break;
          iVar3 = iVar3 + 1;
          if (200 < iVar3) {
            FUN_1008e3970("","PrlAudioCore",0,"Timeout while waiting for audio %s","Stopped");
            iVar4 = -0x2a7c;
            break;
          }
          _usleep(10000);
          iVar4 = 0;
        } while (local_38._7_1_ == '\x01');
        if ((iVar4 != 0) && (0 < DAT_1011b55f8)) {
          FUN_1008e3970("","PrlAudioCore",1,"Can\'t wait for audio stop. Err code: %d",0);
        }
        goto LAB_10040c615;
      }
      FUN_1008e3970("","PrlAudioCore",0,"Can\'t stop audio unit. Err code: %d",iVar3);
    }
    bVar5 = *(char *)(param_1 + 0x38) == '\0';
  }
  return bVar5;
}

