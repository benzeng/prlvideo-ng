
void FUN_100cd5cd0(void)

{
  FUN_100df99c0("","hid",0,"[CHIDHostHook] Ungrab all (keyboard: %p, mouse: %p)",DAT_102311910,
                DAT_102311918);
  if (DAT_102311910 != (long *)0x0) {
    (**(code **)(*DAT_102311910 + 0x78))();
  }
  if (DAT_102311918 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100cd5d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_102311918 + 0x98))();
    return;
  }
  return;
}

