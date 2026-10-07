
void FUN_1000a6580(long param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  
  iVar1 = *param_2;
  if (iVar1 < 0x236) {
    if (iVar1 < 0x202) {
      if (iVar1 == 0x8e) {
        plVar2 = *(long **)(*(long *)(param_1 + 0x1940) + 0x60);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x50))(plVar2,0);
        }
      }
      else if (iVar1 == 0xab) {
        FUN_10008c0d0(*(undefined8 *)(param_1 + 0x1940),0);
      }
    }
    else if (iVar1 == 0x202) {
      *(undefined8 *)(param_1 + 0x1a10) = 0;
    }
    else if (iVar1 == 0x208) {
      *(undefined8 *)(param_1 + 0x1918) = 0;
    }
  }
  else if (iVar1 < 0x23a) {
    if ((iVar1 == 0x236) && (*(long *)(param_1 + 0x1910) != 0)) {
      FUN_100762530(*(long *)(param_1 + 0x1910),0,0);
    }
  }
  else if (iVar1 < 0x249) {
    if (iVar1 == 0x23a) {
      *(undefined8 *)(param_1 + 0x1148) = 0;
    }
    else if ((iVar1 == 0x248) && (lVar3 = *(long *)(param_1 + 0x1a38), lVar3 != 0)) {
      QMutex::lock();
      *(undefined8 *)(lVar3 + 0x11850) = 0;
      QMutex::unlock();
    }
  }
  else if (iVar1 == 0x249) {
    *(undefined8 *)(param_1 + 0x1928) = 0;
  }
  else if (iVar1 == 0x24a) {
    *(undefined8 *)(param_1 + 0x1930) = 0;
  }
  if (((*(long *)(param_1 + 0x1a50) != 0) && (*(long *)(param_2 + 0xc) != 0)) &&
     (*(long *)(param_2 + 8) != 0)) {
    cVar4 = FUN_1000f5d50();
    if (cVar4 == '\0') {
      FUN_1008e3970("","vm",0,"Couldn\'t unregister mon buffer id: %x ix: %hx app_addr: %llx",
                    *param_2,*(undefined2 *)((long)param_2 + 6),*(undefined8 *)(param_2 + 0xc));
    }
  }
  return;
}

