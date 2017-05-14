import sys
sys.path.append("iroha/")
import iroha_files
sys.path.append("tests/")
import test_files

EXTRA = ["README.md", "NEWS", "configure", "Makefile", "config.mk", "lib/nli.in", "src/nli.gyp", "iroha/src/iroha.gyp", "src/fe/parser.ypp", "ylwrap", "nli_files.py", "lib/default-isynth.n"]

ifiles = iroha_files.GetGypFileList("iroha/src/iroha.gyp")
iextras = iroha_files.GetExtraFileList("iroha/")
nfiles = iroha_files.GetGypFileList("src/nli.gyp")

tfiles = test_files.GetFiles("tests/")

files = nfiles + EXTRA + ifiles + iextras + tfiles

iroha_files.MakeTarBall("nli-tmp", files)