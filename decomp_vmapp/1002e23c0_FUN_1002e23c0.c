
bool FUN_1002e23c0(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s:%02x:xx] flush printer spool",
                  (&PTR_s_UNK_101117020)
                  [*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x1490)],
                  *(undefined4 *)(*(long *)(param_1 + 8) + 0x1c));
  }
  (**(code **)(**(long **)(param_1 + 0x40) + 0x18))(*(long **)(param_1 + 0x40),param_1 + 0x48);
  iVar1 = *(int *)(*(long *)(param_1 + 0x50) + 0x14);
  QMutex::unlock();
  return iVar1 != 0;
}

