import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;

public class GhidraDecompAll extends GhidraScript {
    @Override
    public void run() throws Exception {
        String out = "/home/dong/prlvideo-ng/decomp_all/";
        new File(out).mkdirs();
        DecompInterface di = new DecompInterface();
        di.openProgram(currentProgram);
        int n = 0;
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext()) {
            Function f = it.next();
            if (f.isThunk()) continue;
            DecompileResults r = di.decompileFunction(f, 45, monitor);
            if (r != null && r.decompileCompleted()) {
                try (Writer w = new OutputStreamWriter(new FileOutputStream(out + f.getEntryPoint() + "_" + f.getName() + ".c"))) {
                    w.write(r.getDecompiledFunction().getC());
                }
                n++;
            }
        }
        println("DECOMPILED_ALL=" + n);
    }
}
