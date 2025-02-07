#!/bin/bash
#!/bin/sh
#SBATCH --partition=GPUQ
#SBATCH --account=share-ie-idi
#SBATCH --time=00:10:00
#SBATCH --nodes=1              # compute nodes
#SBATCH --ntasks-per-node=1    # mpi process each node
#SBATCH --gres=gpu:a100:1
#SBATCH --mem=64000
#SBATCH --job-name="Gpuport"
#SBATCH --output=out.txt
##SBATCH --mail-user=<email>
##SBATCH --mail-type=ALL

#module purge
#module load gcccuda/2020a
#module load Python/3.8.2-GCCcore-9.3.0
#module load OpenMPI/4.0.3-gcccuda-2020a

./run.sh

# happy end
exit 0


