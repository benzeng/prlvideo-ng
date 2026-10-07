
void FUN_0040f4ee(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 local_11c [4];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_100;
  int local_c;
  
  local_11c = (undefined1  [4])param_1;
  uVar2 = FUN_0040f46e();
  local_c = FUN_0040f480(uVar2);
  if (local_c != -1) {
    write(local_c,"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n",0x44);
    write(local_c,"* Parallels Virtualization System Log File\n",0x2b);
    write(local_c,&DAT_0041906c,2);
    sprintf((char *)&local_118,"* Product information %s\n","Parallels Desktop");
    lVar3 = -1;
    pcVar5 = (char *)&local_118;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    write(local_c,&local_118,(long)(int)(~(uint)lVar3 - 1));
    sprintf((char *)&local_118,"* Build information %s %s\n","12.2.1 (41615)",
            "Mon, 26 Jun 2017 16:57:55");
    lVar3 = -1;
    pcVar5 = (char *)&local_118;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    write(local_c,&local_118,(long)(int)(~(uint)lVar3 - 1));
    write(local_c,&DAT_0041906c,2);
    FUN_0040f266(&local_118);
    uVar4 = 0xffffffffffffffff;
    pcVar5 = (char *)&local_118;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    *(undefined2 *)(local_11c + ~uVar4 + 3) = 10;
    lVar3 = -1;
    pcVar5 = (char *)&local_118;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    write(local_c,&local_118,(long)(int)(~(uint)lVar3 - 1));
    local_118 = CONCAT13(local_118._3_1_,0xa2a);
    lVar3 = -1;
    pcVar5 = (char *)&local_118;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    write(local_c,&local_118,(long)(int)(~(uint)lVar3 - 1));
    local_118 = 0x704f202a;
    local_114 = 0x74617265;
    local_110 = 0x20676e69;
    local_10c = 0x74737953;
    local_108 = 0x4c206d65;
    local_104 = 0x78756e69;
    local_100 = 10;
    lVar3 = -1;
    pcVar5 = (char *)&local_118;
    do {
      if (lVar3 == 0) break;
      lVar3 = lVar3 + -1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    write(local_c,&local_118,(long)(int)(~(uint)lVar3 - 1));
    write(local_c,"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n",0x44);
    write(local_c,&DAT_004190df,1);
    close(local_c);
  }
  return;
}

