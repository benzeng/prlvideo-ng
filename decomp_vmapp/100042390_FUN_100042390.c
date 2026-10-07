
int FUN_100042390(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
  if (*(char *)(param_1 + 0x198) == '\0') {
    if (*(short *)(param_2 + 0x16) == 2) {
      lVar5 = FUN_1002a6120(param_2,0,0);
      lVar6 = FUN_1002a6120(param_2,1,0);
      uVar1 = *(uint *)(lVar5 + 8);
      uVar8 = (ulong)uVar1;
      uVar2 = *(uint *)(lVar6 + 8);
      if ((uVar8 < 0x14) || (uVar2 < 0x14)) {
        FUN_1008e3970("SGAH","vm",0,
                      "Error: size of buffers supplied by guest (in: %u bytes, out: %u bytes) is too small to fit UD_COMMAND that is %u bytes"
                      ,uVar8,uVar2,CONCAT44(uVar10,0x14));
        iVar4 = -0xffffff7;
      }
      else {
        if (uVar2 < uVar1) {
          uVar2 = uVar1;
        }
        uVar9 = (ulong)uVar2;
        puVar7 = _malloc(uVar9);
        if (puVar7 == (undefined4 *)0x0) {
          FUN_1008e3970("SGAH","vm",0,"Error: failed to allocate %u bytes",uVar9);
          iVar4 = -0xfffffef;
        }
        else {
          FUN_1002a5990(lVar5,0,puVar7,uVar8);
          if (uVar8 < (ulong)(uint)puVar7[4] + 0x14) {
            FUN_1008e3970("SGAH","vm",0,
                          "Error: command %i reports about %u bytes of data but only %u bytes can be read from paged buffer"
                          ,*puVar7,(ulong)(uint)puVar7[4],CONCAT44(uVar10,uVar1));
            _free(puVar7);
            iVar4 = -0xffffffe;
          }
          else {
            FUN_100044f20(param_1,puVar7,uVar9);
            iVar3 = FUN_100045380(param_1,param_2,puVar7,uVar9);
            if (1 < iVar3 + 1U) {
              if (iVar3 == -0xfffffdf) {
                iVar3 = FUN_100043070(param_1,puVar7,uVar8);
              }
              else {
                FUN_1008e3970("SGAH","vm",0,
                              "Error: guest request failed with status 0x%x, cmd=%p, pr=%p (command %i with %i bytes of data)"
                              ,iVar3,puVar7,param_2,*puVar7,puVar7[4]);
              }
            }
            iVar4 = -1;
            if (iVar3 != -1) {
              if (iVar3 == 0) {
                iVar4 = FUN_1000455e0();
                _free(puVar7);
              }
              else {
                _free(puVar7);
                iVar4 = iVar3;
              }
            }
          }
        }
      }
    }
    else {
      FUN_1008e3970("SGAH","vm",0,"Error: 2 buffers required, but %i was supplied");
      iVar4 = -0x10000000;
    }
  }
  else {
    iVar4 = -0x10000000;
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("SGAH","vm",3,
                    "Shared Guest Applications will ignore all incoming guest requests (and %p too)"
                    ,param_2);
    }
  }
  return iVar4;
}

