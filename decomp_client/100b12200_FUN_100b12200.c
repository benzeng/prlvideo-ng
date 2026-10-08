
void FUN_100b12200(long param_1)

{
  byte bVar1;
  ulong in_RAX;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  
  if (*(short *)(param_1 + 0x1fe) == -0x55ab) {
    FUN_100df99c0("","dimg",0,"MBR dump:");
    FUN_100dc9190(param_1,0x200);
    pcVar2 = (char *)(param_1 + 0x1be);
    uVar5 = 0;
    do {
      if (pcVar2[4] != '\0') {
        FUN_100df99c0("","dimg",0,"MBR partition %u",uVar5 & 0xffffffff);
        pcVar4 = "Yes";
        if (*pcVar2 != -0x80) {
          pcVar4 = "No";
        }
        FUN_100df99c0("","dimg",0,"Bootable      %s",pcVar4);
        FUN_100df99c0("","dimg",0,"FS ID         0x%x",pcVar2[4]);
        FUN_100df99c0("","dimg",0,"Start sector  %u",*(undefined4 *)(pcVar2 + 8));
        FUN_100df99c0("","dimg",0,"Sector count  %u",*(undefined4 *)(pcVar2 + 0xc));
        FUN_100df99c0("","dimg",0,"CHS start:");
        bVar1 = pcVar2[2];
        uVar3 = (bVar1 & 0xc0) << 2 | (uint)(byte)pcVar2[3];
        if (((pcVar2[1] == -2) && ((bVar1 & 0x3f) == 0x3f)) && (uVar3 == 0x3ff)) {
          FUN_100df99c0("","dimg",0,"Magic CHS number. Partition use LBA mode.");
        }
        else {
          in_RAX = CONCAT44((int)(in_RAX >> 0x20),(uint)bVar1) & 0xffffffff0000003f;
          FUN_100df99c0("","dimg",0,"C: %u H: %u S: %u",uVar3,pcVar2[1],in_RAX);
        }
        FUN_100df99c0("","dimg",0,"CHS end:");
        bVar1 = pcVar2[6];
        uVar3 = (bVar1 & 0xc0) << 2 | (uint)(byte)pcVar2[7];
        if (((pcVar2[5] == -2) && ((bVar1 & 0x3f) == 0x3f)) && (uVar3 == 0x3ff)) {
          FUN_100df99c0("","dimg",0,"Magic CHS number. Partition use LBA mode.");
        }
        else {
          in_RAX = CONCAT44((int)(in_RAX >> 0x20),(uint)bVar1) & 0xffffffff0000003f;
          FUN_100df99c0("","dimg",0,"C: %u H: %u S: %u",uVar3,pcVar2[5],in_RAX);
        }
      }
      uVar5 = uVar5 + 1;
      pcVar2 = pcVar2 + 0x10;
    } while (uVar5 != 4);
    return;
  }
  FUN_100df99c0("","dimg",0,"The MBR partition have incorrect signature 0x%04x");
  return;
}

